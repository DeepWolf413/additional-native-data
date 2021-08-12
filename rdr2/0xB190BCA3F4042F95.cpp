// mob2.ysc @ L36912
int func_794(char[4] cParam0)
{
  if (!func_10(cParam0, 8))
  {
    func_1290(cParam0);
    func_1324(bLocal_1641, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
    WEAPON::_ADD_AMMO_TO_PED(bLocal_1641, joaat("WEAPON_REVOLVER_CATTLEMAN"), 6, 444010018);
  }
  func_142(cParam0, func_35(cParam0), 4096);
  func_1314(0, 0);
  func_1315(0);
  MAP::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  MAP::ALLOW_SONAR_BLIPS(true);
  func_115(1);
  func_1325(0);
  if (!PAD::IS_CONTROL_ENABLED(0, joaat("INPUT_CONTEXT_X")))
  {
    PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), true);
  }
  func_137(cParam0, 0);
  func_136(cParam0, 0);
  func_1309(cParam0, &bLocal_1649, func_230(0, 0), 0, "m_pedPlayerHorse", 0);
  func_1309(cParam0, &bLocal_1651, func_230(0, 1), 0, "m_pedJohnHorse", 0);
  func_1326(func_1(0, 0), 10f, 0, 0);
  func_1327();
  func_1328();
  func_1329(bLocal_1641, Global_35, 3f, 1065353216 /* Float: 1f */);
  return 1;
}