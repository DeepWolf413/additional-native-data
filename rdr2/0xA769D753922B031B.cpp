// coachrobberies.ysc @ L33621
void func_941(int* iParam0)
{
  if (func_53(*iParam0, 0))
  {
    func_163(iParam0, &(iParam0->f_5), 1, 0, 0);
    WEAPON::_0xA769D753922B031B(*iParam0, 0.5f, 0.6f);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 30, true);
    PED::SET_PED_FIRING_PATTERN(*iParam0, joaat("FIRING_PATTERN_FULL_AUTO"));
    PED::SET_PED_ACCURACY(*iParam0, 20);
    TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, Global_36, 20f);
    iParam0->f_8 = 1;
  }
}