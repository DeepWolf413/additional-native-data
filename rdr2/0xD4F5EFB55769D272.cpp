// mudtown1.ysc @ L52843
bool func_1290(char[4] cParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
  {
    VEHICLE::_0x201B8ED4FF7FE9F5(iLocal_423[4]);
  }
  func_1293(cParam0);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
  {
    func_1468(cParam0, &(iLocal_423[4]), "wagon02x", 0, 0, 0);
  }
  else
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_422))
  {
    iLocal_422 = VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iLocal_423[4], 4);
  }
  func_151(cParam0, Local_236[7 /*4*/].f_1, 0, 0, 0, 0, 0);
  func_151(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
  func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
  func_437(cParam0, iLocal_422, "s_wagonwheel01x", 0, 0, 0, 0);
  return true;
}