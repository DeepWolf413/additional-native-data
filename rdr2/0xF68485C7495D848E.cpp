// abigail2_1.ysc @ L33709
bool func_747(var uParam0)
{
  if (((!func_1215(uParam0, 0, 1) || !func_1215(uParam0, 1, 1)) || !func_1215(uParam0, 2, 1)) || !func_1216(uParam0, 2, 1))
  {
    return false;
  }
  func_1217();
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_177))
  {
    iLocal_177 = VOLUME::_CREATE_VOLUME_BOX(-2539.994f, 430.5835f, 147.7188f, 0f, 0f, 0f, 40f, 36f, 6f);
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_173))
  {
    iLocal_173 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2572.991f, 420.1497f, 145.4065f, 0f, 0f, -9.999995f, 26f, 50f, 16f, "Avoidance");
    MISC::_0x2FCD528A397E5C88(iLocal_173, 1048576);
    PATHFIND::_0xE5EF9DE716FF737E(iLocal_173, 0, 1);
    POPULATION::_0xB56D41A694E42E86(iLocal_173, 2828287, 0, 0, -1, -1, 2);
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_174))
  {
    iLocal_174 = VOLUME::_CREATE_VOLUME_BOX(-2575.061f, 365.9359f, 150.5333f, 0f, 0f, -3f, 12f, 20f, 4f);
  }
  func_1218();
  CLOCK::SET_CLOCK_TIME(11, 0, 0);
  return uParam0->f_607 == uParam0->f_607;
}