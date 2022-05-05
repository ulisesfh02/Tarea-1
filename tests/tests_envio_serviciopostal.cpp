#include <gtest/gtest.h>
#include "../src/ServicioPostal.h"

namespace{

    TEST(Test_TipoEnvio_ServicioPostal, Test_CeroATres_PrimeraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(1, 2, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 45;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_CeroATres_SegundaClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(2, 2, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 4.2;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_CeroATres_TerceraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(3, 2, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 1.8;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_CuatroAOcho_PrimeraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(1, 5, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 67.5;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_CuatroAOcho_SegundaClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(2, 5, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 7.95;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_CuatroAOcho_TerceraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(3, 5, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 1.8;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_NueveOMas_PrimeraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(1, 11, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 90;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_NueveOMas_SegundaClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(2, 11, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 11.25;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
    TEST(Test_TipoEnvio_ServicioPostal, Test_NueveOMas_TerceraClase){
        /// AAA

        // Arrange - configurar el escenario
        ServicioPostal servicioPostal(3, 11, 150);

        // Act - ejecute la operación
        double actual = servicioPostal.calculoEnvio();
        double esperada = 1.8;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}
