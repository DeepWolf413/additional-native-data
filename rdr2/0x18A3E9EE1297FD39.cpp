// act_bankrobbery01.ysc @ L21068
bool func_526(var uParam0)
{
  return (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1064, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uParam0->f_40[6]);
}