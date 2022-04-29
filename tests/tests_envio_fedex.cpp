#include <gtest/gtest.h>
#include "../src/TipoEnvio.h"

namespace{

    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(400, 7);

        // Act - ejecute la operación
        int actual = fedex.CalculoEnvio();
        int esperada = 35;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(400, 15);

        // Act - ejecute la operación
        int actual = fedex.CalculoEnvio();
        int esperada = 45;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(550, 7);

        // Act - ejecute la operación
        int actual = fedex.CalculoEnvio();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(550, 15);

        // Act - ejecute la operación
        int actual = fedex.CalculoEnvio();
        int esperada = 60;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}