#include <gtest/gtest.h>
#include "../src/TipoEnvio.h"

namespace{

    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex;

        // Act - ejecute la operación
        int actual = fedex.OperacionEspecial(6);
        int esperada = 12;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MenosDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex;

        // Act - ejecute la operación
        int actual = fedex.OperacionEspecial(6);
        int esperada = 12;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MenosDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex;

        // Act - ejecute la operación
        int actual = fedex.OperacionEspecial(6);
        int esperada = 12;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_FedEX, Test_MasDeQuinientos_MasDeDiez){
        /// AAA

        // Arrange - configurar el escenario
        FedEX fedex;

        // Act - ejecute la operación
        int actual = fedex.OperacionEspecial(6);
        int esperada = 12;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}