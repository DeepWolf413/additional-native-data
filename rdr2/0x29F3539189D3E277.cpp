// train_robbery4.ysc @ L62378
void func_1332()
{
  switch (iLocal_9204)
  {
    case 0:
      if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_9282, "BillWilliamson") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_9282, "BillWilliamson"))
      {
        PED::SET_PED_COMBAT_ATTRIBUTES(Local_143[1 /*65*/], 27, true);
        WEAPON::_0x5230D3F6EE56CFE6(Local_143[1 /*65*/], 0);
        PED::_0x29F3539189D3E277(Local_3526, joaat("CENTERMASSONLY"));
        TASK::TASK_SHOOT_AT_ENTITY(Local_143[1 /*65*/], Local_3526, 7000, 0, 0);
        iLocal_9204++;
      }
      break;
    case 1:
      if (func_1787(Local_143[1 /*65*/], 167901368, -2, 0))
      {
        if (!PED::IS_PED_INJURED(Local_3526))
        {
          TASK::TASK_SHOOT_AT_ENTITY(Local_143[1 /*65*/], Local_3526, 7000, 0, 0);
        }
        else
        {
          TASK::TASK_AIM_GUN_AT_ENTITY(Local_143[1 /*65*/], Local_3526, -1, false, 1);
          iLocal_9204++;
        }
      }
      break;
    case 2:
      break;
  }
}