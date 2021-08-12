// spd_agnesdowd1.ysc @ L488
void func_3()
{
  if (iLocal_115 == 3)
  {
    if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_183, Global_35))
    {
      TASK::TASK_LOOK_AT_ENTITY(iLocal_183, Global_35, -1, 0, 51, 0);
    }
  }
  else if (PED::IS_PED_HEADTRACKING_ENTITY(iLocal_183, Global_35))
  {
    TASK::TASK_CLEAR_LOOK_AT(iLocal_183);
  }
}