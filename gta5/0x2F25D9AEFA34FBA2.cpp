// finalec1.ysc @ L114847
void func_803(int iParam0)
{
  float fVar0;
  float fVar1;
  
  if (!PED::IS_PED_INJURED(Local_196[iParam0 /*14*/]))
  {
    TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_196[iParam0 /*14*/], 200f, 0);
    PED::REGISTER_TARGET(Local_196[iParam0 /*14*/], PLAYER::PLAYER_PED_ID());
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_196[iParam0 /*14*/], false);
    fVar0 = func_806(iParam0);
    if (fVar0 > 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_196[iParam0 /*14*/], func_633(iParam0), fVar0, false, false);
    }
    fVar1 = func_805(iParam0);
    if (fVar1 > 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_196[iParam0 /*14*/], func_804(iParam0), fVar1, false, true);
    }
    Local_196[iParam0 /*14*/].f_11 = 4;
  }
}