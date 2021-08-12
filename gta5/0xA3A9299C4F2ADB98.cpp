// friends_controller.ysc @ L38450
void func_372(var uParam0, var uParam1)
{
  if (!PED::IS_PED_INJURED(uParam1->f_2))
  {
    PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(uParam1->f_2);
    PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_2, 16);
    PED::SET_PED_CAN_SWITCH_WEAPON(uParam1->f_2, true);
    func_281(uParam0, uParam1, 0);
  }
}