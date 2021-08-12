// train_robbery4.ysc @ L60510
void func_1300()
{
  switch (iLocal_9235)
  {
    case 0:
      if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SHOOTING(Local_143[3 /*65*/])) || (Local_664[0 /*65*/].f_47 && PED::IS_PED_SHOOTING(Local_664[0 /*65*/]))) || (Local_664[1 /*65*/].f_47 && PED::IS_PED_SHOOTING(Local_664[1 /*65*/])))
      {
        iLocal_9236 = MISC::GET_GAME_TIMER();
        iLocal_9235++;
      }
      break;
    case 1:
      PLAYER::_0x1D256EED194F5B58(PLAYER::PLAYER_ID());
      if (func_1771(&iLocal_9236, 15000))
      {
        iLocal_9235++;
      }
      break;
    case 2:
      break;
  }
}