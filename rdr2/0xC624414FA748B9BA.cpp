// cornwall1.ysc @ L56632
void func_1333()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 6)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_546[iVar0 /*8*/]))
    {
      switch (Local_546[iVar0 /*8*/].f_3)
      {
        case 0:
          PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_546[iVar0 /*8*/], true);
          func_1768(&(Local_546[iVar0 /*8*/].f_2), joaat("BLIP_STYLE_ENEMY"), Local_546[iVar0 /*8*/], 0);
          func_223(&(Local_546[iVar0 /*8*/].f_4));
          func_1746(&(Local_546[iVar0 /*8*/]), 12);
          break;
        case 12:
          TASK::_TASK_COMBAT_PED_3(Local_546[iVar0 /*8*/], func_174(5, 4), 0, 0);
          func_1844(Local_546[iVar0 /*8*/], func_454(12, iVar0), 5f, 1, 0);
          func_223(&(Local_546[iVar0 /*8*/].f_4));
          func_1746(&(Local_546[iVar0 /*8*/]), 13);
          break;
      }
    }
    iVar0++;
  }
}