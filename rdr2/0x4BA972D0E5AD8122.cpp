// grays1.ysc @ L35405
bool func_764(char[4] cParam0)
{
  if (!func_1248(cParam0, 0))
  {
    return false;
  }
  CLOCK::SET_CLOCK_TIME(11, 0, 0);
  func_894(Local_144[0 /*17*/], 1890.638f, -664.7539f, 41.1239f, 247.9499f, 2, 1073741824 /* Float: 2f */);
  func_894(Local_144[1 /*17*/], 1890.636f, -661.8984f, 41.0636f, 249.7957f, 2, 1073741824 /* Float: 2f */);
  func_894(Local_538[1 /*17*/], 1889.074f, -664.0239f, 41.0571f, 249.7957f, 2, 1073741824 /* Float: 2f */);
  func_894(iLocal_662[0], 1533.69f, -686.49f, 48.99f, 310.18f, 2, 1073741824 /* Float: 2f */);
  func_894(iLocal_609[0], 1528.01f, -688.67f, 49.15f, -46.47f, 2, 1073741824 /* Float: 2f */);
  func_894(iLocal_609[1], 1524.84f, -687.49f, 49.39f, -43.52f, 2, 1073741824 /* Float: 2f */);
  TASK::_0x4BA972D0E5AD8122(iLocal_662[0], 0);
  PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_662[0], 0);
  func_1248(cParam0, 3);
  Local_144[0 /*17*/].f_2 = 0;
  Local_144[1 /*17*/].f_2 = 0;
  func_169(1);
  func_905(0f, 0f);
  iLocal_780[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1604.112f, -576.7292f, 51.76921f, 0f, 0f, 53f, 383f, 132f, 35f, "Ride Container 1");
  iLocal_780[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1819.432f, -460.0179f, 52.11584f, 0f, 0f, 0f, 86f, 100f, 18f, "Ride Container 2");
  iLocal_780[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1837.422f, -622.758f, 37.96502f, 0f, 0f, 50f, 154f, 174f, 53f, "Ride Container 3");
  iLocal_784 = VOLUME::_CREATE_VOLUME_CYLINDER(1819.432f, -1003.758f, 52.11584f, 0f, 0f, 0f, 750f, 750f, 18f);
  iLocal_785 = VOLUME::_CREATE_VOLUME_CYLINDER(1952.835f, -683.6054f, 47.17862f, 0f, 0f, 0f, 47f, 58f, 15f);
  func_458(iLocal_780[0], 0, 0, 633024);
  func_458(iLocal_780[1], 0, 0, 633024);
  func_458(iLocal_780[2], 0, 0, 108736);
  func_894(iLocal_615, 1513.365f, -700.8989f, 48.6538f, 307.3558f, 2, 1073741824 /* Float: 2f */);
  return cParam0->f_607 == cParam0->f_607;
}