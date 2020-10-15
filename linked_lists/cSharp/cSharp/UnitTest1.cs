using NUnit.Framework;
using System.Collections.Generic;

namespace cSharp
{
    public class LinkedListUtils
    {
        public void RemoveDuplicates(LinkedList<string> ll)
        {
            List<string> data = new List<string> {};

            var start = ll.First;
            var prev = start;

            while(start.Next != null)
            {
                if(data.Contains(start.Value))
                {
                    // wip
                    //prev.SetNe; = start.Next;
                }
                data.Add(start.Value);
                prev = start;
                start = start.Next;
            }
    }

    public class Tests
    {
        [SetUp]
        public void Setup()
        {
        }

        [Test]
        public void Test1()
        {
            Assert.Fail();
        }
    }
}