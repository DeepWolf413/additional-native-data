// short_update.ysc @ L31370
void func_954(int iParam0, var uParam1, struct<4> Param2)
{
  var uVar0;

  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
  if (PED::IS_PED_ON_MOUNT(Global_35) && !func_901(Global_35))
  {
    return;
  }
  else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
  {
    return;
  }
  else if (PED::IS_PED_RELOADING(Global_35))
  {
    return;
  }
  if (iParam0 == 1)
  {
    uVar0 = uParam1;
    if (!Global_1935496.f_9 && !PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "inInspectionMode"))
    {
      TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), uVar0, &Param2, 0, 0, 0, -1082130432 /* Float: -1f */);
      Global_1935496.f_8 = 1;
      Global_1935496.f_55 = { Param2 };
    }
  }
}