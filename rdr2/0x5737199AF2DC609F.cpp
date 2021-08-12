// braithwaites1.ysc @ L17977
void func_175(bool bParam0)
{
  vector3 vVar0;
  vector3 vVar3;

  if ((bParam0 && func_167(63)) || (!bParam0 && !func_167(63)))
  {
    return;
  }
  if (bParam0)
  {
    POPULATION::_0xB56D41A694E42E86(Local_141.f_59, 73728, 0, 0, -1, -1, 0);
    POPULATION::_0x18262CAFEBB5FBE1(Local_141.f_59, 73728, 0, 0, -1, -1, 0);
    PATHFIND::_0xC1799FAFD2FDF52B(Local_141.f_59, 0, 0, 0);
    PATHFIND::_0xE5EF9DE716FF737E(Local_141.f_59, 0, 1);
    uLocal_2065 = PED::_0x4C39C95AE5DB1329(Local_141.f_59, false, 15);
    func_413(63);
  }
  else
  {
    VOLUME::_GET_VOLUME_BOUNDS(Local_141.f_59, &vVar0, &vVar3);
    POPULATION::_0x74C2B3DC0B294102(Local_141.f_59);
    POPULATION::_0xA1CFB35069D23C23(Local_141.f_59);
    PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 0, 1);
    PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
    PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2065, false);
    func_174(63);
  }
}