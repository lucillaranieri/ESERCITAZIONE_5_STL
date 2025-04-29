#pragma once

#include <iostream>
#include "PolygonalMesh.hpp"

using namespace std;

namespace PolygonalLibrary
{
// importare la mesh poligonale (mesh una struttura di tipo PolygonalMesh), verifica se è corretta e restituisce true se ha successo e false se non ha successo 
bool ImportMesh(PolygonalMesh& mesh);

// Importa la Cell0D da Cell0Ds.csv file
// mesh: PolygonalMesh struttura
// resistuisce true o false
bool ImportCell0Ds(PolygonalMesh& mesh);

// Importa la Cell1D properties da Cell1Ds.csv file
// mesh:  PolygonalMesh struttura

bool ImportCell1Ds(PolygonalMesh& mesh);

/// Import the Cell2D properties from Cell2Ds.csv file
/// mesh:  PolygonalMesh struttura

bool ImportCell2Ds(PolygonalMesh& mesh);

}

