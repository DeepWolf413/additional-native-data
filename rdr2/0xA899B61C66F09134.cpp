// mudtown4.ysc @ L78775
void func_1772()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 6)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_2223[iVar0 /*5*/]))
    {
      switch (Local_2223[iVar0 /*5*/].f_1)
      {
        case 0:
          if (ENTITY::IS_ENTITY_DEAD(PED::_GET_RIDER_OF_MOUNT(Local_2223[iVar0 /*5*/], true)))
          {
            func_264(&(Local_2223[iVar0 /*5*/].f_2));
            Local_2223[iVar0 /*5*/].f_1++;
          }
          break;
        case 1:
          if (func_1014(&(Local_2223[iVar0 /*5*/].f_2)) >= 2f)
          {
            TASK::TASK_ANIMAL_FLEE(Local_2223[iVar0 /*5*/], Global_35, -1);
            ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2223[iVar0 /*5*/]));
            Local_2223[iVar0 /*5*/].f_1++;
          }
          break;
      }
    }
    iVar0++;
  }
}