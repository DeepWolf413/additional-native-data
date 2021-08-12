// marston2.ysc @ L35558
int func_770(char[4] cParam0)
{
  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
  iLocal_182[1] = 0;
  if (func_264(13))
  {
    func_265(cParam0, 13, uLocal_46[1], 0, 0, 1, 0);
  }
  func_462(&iLocal_41);
  MAP::CLEAR_GPS_CUSTOM_ROUTE();
  if (!MAP::DOES_BLIP_EXIST(iLocal_41))
  {
    iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
    MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
    MAP::SET_GPS_FLAGS(512, 0f);
  }
  func_184();
  func_177();
  return 1;
}