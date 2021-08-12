// marston5_3.ysc @ L65812
bool func_1704(char[4] cParam0)
{
  PED::SET_PED_RESET_FLAG(Global_35, 223, true);
  PED::SET_PED_RESET_FLAG(Local_59[5], 223, true);
  PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 0);
  func_2111(Global_35, ENTITY::GET_ENTITY_COORDS(Local_59[4], true, false), &uLocal_306, 15f, 10f, 10f, 10f, 2f, 0, 0, 1, 1, 1);
  if ((ENTITY::IS_ENTITY_IN_VOLUME(Local_59[5], Local_59.f_111[9], true, 0) && !func_1667()) && !func_176(Local_59.f_176, 524288))
  {
    TASK::TASK_LOOK_AT_ENTITY(Local_59[4], Global_35, -1, 0, 51, 0);
    TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_59[4], -1, 0, 51, 0);
    func_1677(cParam0, "MAR5_HRETURN", 0);
    Local_59.f_111[10] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -2532.71f, 439.5654f, 145.9892f, 0f, 0f, 0.475352f, 3.71f, 15.24694f, 9.880117f);
    Local_59.f_111[11] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -2554.13f, 439.5654f, 145.9892f, 0f, 0f, 0.475352f, 3.71f, 15.24694f, 9.880117f);
    Local_59.f_111[12] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -2542.71f, 430.015f, 145.9892f, 0f, 0f, 90f, 3.71f, 19.247f, 9.880117f);
    Local_59.f_111[13] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -2542.71f, 448.97f, 145.9892f, 0f, 0f, 90f, 3.71f, 19.247f, 9.880117f);
    func_418(&(Local_59.f_176), 524288);
  }
  if (ENTITY::IS_ENTITY_IN_VOLUME(Local_59[5], Local_59.f_111[9], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_59[5], Local_59.f_111[9], true, 0))
  {
    if ((!PED::IS_PED_ON_MOUNT(Global_35) && TASK::IS_PED_STILL(Local_59[5])) && func_889(Global_35, Local_59[5], 1, 1) < 5f)
    {
      PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
      func_917(575624463, 0, 0f, 0, 1, 0, 0, 0);
      TASK::TASK_STAND_STILL(Local_59[5], -1);
      return true;
    }
  }
  return false;
}