using System;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Passes;

namespace AcidSharp.CLI
{
    public class PassConstRefFix : TranslationUnitPass
    {
        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }

            if (parameter.TranslationUnit?.Module?.LibraryName == "Std")
            {
                return false;
            }

            var cleanedType = CleanType(parameter.QualifiedType);

            if (CleanType(parameter.QualifiedType).Type.IsEnumType())
            {
                parameter.QualifiedType = cleanedType;
                return true;
            }

            if (!parameter.IsConst || !parameter.Type.Desugar().IsPointerToPrimitiveType())
            {
                return false;
            }

            parameter.Usage = ParameterUsage.In;
            parameter.QualifiedType = cleanedType;
            return true;
        }

        private QualifiedType CleanType(QualifiedType type)
        {
            if (!(type.Type is PointerType pointerType) || !pointerType.IsReference)
            {
                return type;
            }

            return new QualifiedType(pointerType.Pointee);
        }
    }
}
