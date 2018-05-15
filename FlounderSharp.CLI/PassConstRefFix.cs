using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    public class PassConstRefFix : TranslationUnitPass
    {
        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }

            if (!parameter.IsConst || !parameter.Type.Desugar().IsPointerToPrimitiveType())
            {
                return false;
            }

            var currentQualifiedType = parameter.QualifiedType;

            if (!(currentQualifiedType.Type is PointerType pointerType) || !pointerType.IsReference)
            {
                return false;
            }
                
            parameter.QualifiedType = new QualifiedType(pointerType.Pointee);
            return true;

        }
    }
}
