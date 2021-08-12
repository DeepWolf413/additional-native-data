// beat_herbalist_camp.ysc @ L5919
int func_162(int iParam0, bool bParam1)
{
  if (bParam1 || !func_13(iParam0, 36))
  {
    if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
    {
      return 0;
    }
    if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_90[3]))
    {
      ENTITY::DETACH_ENTITY(iParam0->f_90[3], false, true);
    }
    if (!TASK::_0x8360C47380B6F351(iParam0->f_87, iParam0->f_90[3], "p_mortarPestle02x_PH_R_HAND", 0))
    {
      return 0;
    }
    else
    {
      func_72(iParam0, 36);
    }
  }
  return 1;
}