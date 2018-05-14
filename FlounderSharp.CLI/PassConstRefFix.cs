using System;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    public class PassConstRefFix : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
            {
                return false;
            }

            foreach (var parameter in method.Parameters)
            {
                Console.WriteLine($"{parameter.Name}: {parameter.IsConst}, {parameter.Type.Desugar().IsPrimitiveTypeConvertibleToRef()}");
            //    parameter.Usage = ParameterUsage.InOut;
            }

            return true;
        }
    }
}
