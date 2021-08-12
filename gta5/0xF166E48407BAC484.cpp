// agency_heist3a.ysc @ L140647
void func_1144()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (Local_1084 - 1))
  {
    if (!PED::IS_PED_INJURED(Local_1084[iVar0 /*32*/]))
    {
      func_140(&(Local_1084[iVar0 /*32*/]), 1);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1084[iVar0 /*32*/], false);
      TASK::TASK_COMBAT_PED(Local_1084[iVar0 /*32*/], PLAYER::PLAYER_PED_ID(), 0, 16);
    }
    iVar0++;
  }
}