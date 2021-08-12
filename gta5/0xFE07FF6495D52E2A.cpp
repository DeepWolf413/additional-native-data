// minute3.ysc @ L36912
void func_294()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  iVar1 = (MISC::GET_GAME_TIMER() - iLocal_541);
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (!func_295())
    {
      if (func_590(iLocal_260[iVar0]))
      {
        if (!PED::IS_PED_FLEEING(iLocal_260[iVar0]) && iVar1 > iVar0 * 1000 + 5000)
        {
          if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_260[iVar0]))
          {
            PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_260[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_260[iVar0], true));
          }
          if (!func_295())
          {
            TASK::TASK_SMART_FLEE_PED(iLocal_260[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
          }
        }
      }
    }
    iVar0++;
  }
}