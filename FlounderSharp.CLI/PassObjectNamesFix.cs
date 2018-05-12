using System;
using CppSharp.AST;
using CppSharp.Passes;
using System.Collections.Generic;

namespace FlounderSharp.CLI
{
    public class PassObjectNamesFix : TranslationUnitPass
    {
        private List<NamespacePair> _namespaces;

        public PassObjectNamesFix(List<NamespacePair> namespaces)
        {
            _namespaces = namespaces;
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
            {
                return false;
            }

            foreach (var ns in _namespaces)
            {
                if (@class.Namespace.Name == ns._original)
                {
                    @class.Namespace.Name = ns._target;
                    return true;
                }
            }

            return false;
        }

        public override bool VisitMethodDecl(Method method)
        {
            /*if (AlreadyVisited(method) || !method.IsGenerated)
            {
                return false;
            }*/

            Console.Write($"Method: {method.Name} (");
            foreach (var parameter in method.Parameters)
            {
                Console.Write($"{parameter.Name}, ");
            }
            Console.Write($")\n");

            return true;
        }
        
        /*public override bool VisitFunctionDecl(Function function)
        {
            if (!function.IsGenerated)
            {
                return false;
            }

            Console.Write($"Function: {function.Name} (");
            foreach (var parameter in function.Parameters)
            {
                Console.Write($"{parameter.Name}, ");
            }
            Console.Write($")\n");

            return true;
        }*/

        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }
            
            // Rename parameters named "object" to "targetObject" as the CSharpGenerator has a hard time with these names in method bodies.
            if (parameter.Name == "object")
            {
                parameter.Name = "targetObject";
                return true;
            }
            
            return false;
        }
    }
}
