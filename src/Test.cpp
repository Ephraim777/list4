#include <catch2/catch_test_macros.hpp>

#include <cstdint>

#include "main.cpp"


TEST_CASE("Testing", "List") {
    std::cout << "\n";
    SECTION("PushFront")
    {
        List MyList;
        MyList.PushFront(1);
        MyList.PushFront(2);
        MyList.PushFront(3);
        std::cout << "PushFront SECTION\n";
        std::cout << "Size: " << MyList.Size() << "\n";
        CHECK(MyList.Size() == 3);
    }
    std::cout << "\n";
    SECTION("PushBack")
    {
        List MyList;
        MyList.PushBack(1);
        MyList.PushBack(2);
        MyList.PushBack(3);
        std::cout << "PushBack SECTION\n";
        std::cout << "Size: " << MyList.Size() << "\n";
        CHECK(MyList.Size() == 3);
    }

    SECTION("PopBack")
    {
        std::cout << "PopBack SECTION\n";
        List MyList;
        MyList.PushBack(1);
        MyList.PushBack(2);
        MyList.PushBack(3);
        int CounterOfDelete = 1;
        unsigned long counter = MyList.Size();
        while (counter--)
        {

            MyList.PopBack();

            std::cout << "\nDeleting a number: " << CounterOfDelete++ << "\n";
            std::cout << "Size: " << MyList.Size() << "\n";
            if (MyList.Empty()) {
                std::cout << "\nEmpty List\n";
                continue;
            }


        }
        CHECK(MyList.Empty());
        //теперь тут проверяю что будет если список пустой и я опять удалю
        REQUIRE_THROWS(MyList.PopBack());
        //обработали исключение

    }

    SECTION("PopFront")
    {
        std::cout << "PopFront SECTION\n";
        List MyList;
        MyList.PushFront(1);
        MyList.PushFront(2);
        MyList.PushFront(3);
        int CounterOfDelete = 1;
        unsigned long counter = MyList.Size();
        while (counter--)
        {

            MyList.PopFront();

            std::cout << "\nDeleting a number: " << CounterOfDelete++ << "\n";
            std::cout << "Size: " << MyList.Size() << "\n";
            if (MyList.Empty()) {
                std::cout << "\nEmpty List\n";
                continue;
            }


        }
        CHECK(MyList.Empty());
        //теперь тут проверяю что будет если список пустой и я опять удалю
        REQUIRE_THROWS(MyList.PopFront());
        //обработали исключение
    }

}