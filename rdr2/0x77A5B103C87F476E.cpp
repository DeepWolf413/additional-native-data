// hideout_hangingdogranch_es.ysc @ L2304
void func_72()
{
  int iVar0;

  iVar0 = 11;
  if (!ENTITY::IS_ENTITY_DEAD(Local_274[iVar0 /*9*/].f_5))
  {
    DECORATOR::DECOR_SET_BOOL(Local_274[iVar0 /*9*/].f_5, "proc_bounty_target", true);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_274[iVar0 /*9*/].f_5, false);
    func_169();
    func_170(&(Local_274[iVar0 /*9*/].f_5));
  }
}