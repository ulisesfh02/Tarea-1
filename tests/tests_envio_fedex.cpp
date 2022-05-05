#include <gtest/gtest.h>
#include "../src/FedEX.h"

namespace{

    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(400, 7);

        // Act - ejecute la operación
        double actual = fedex.calculoEnvio();
        double esperada = 35;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(400, 15);

        // Act - ejecute la operación
        int actual = fedex.calculoEnvio();
        int esperada = 45;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(550, 7);

        // Act - ejecute la operación
        int actual = fedex.calculoEnvio();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex(550, 15);

        // Act - ejecute la operación
        int actual = fedex.calculoEnvio();
        int esperada = 60;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}