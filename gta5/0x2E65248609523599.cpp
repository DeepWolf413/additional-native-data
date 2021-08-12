// fm_horde_controler.ysc @ L142641
void func_1368()
{
  struct<8> Var0[1];
  struct<6> Var9[1];
  
  if (func_6950(PLAYER::PLAYER_ID(), 0))
  {
    return;
  }
  if (!MISC::ARE_STRINGS_EQUAL(&(Global_4456448.f_85822), ""))
  {
    StringCopy(&(Var0[0 /*8*/]), "Mission", 32);
    Var9[0 /*6*/] = { Global_4456448.f_85822 };
    if (func_1370(791, &Var9, &Var0, 1, -1, 1, 0))
    {
      func_1369(791, 131, Local_13613[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_6, 0f, 0);
      func_1369(791, 125, Local_11226.f_1295, 0f, 0);
      func_1369(791, 92, Local_13613[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, 0f, 0);
      func_1369(791, 80, Local_13613[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_5, 0f, 0);
      STATS::LEADERBOARDS_WRITE_ADD_COLUMN_LONG(156, Local_11226.f_1508[1], Local_11226.f_1508[0]);
    }
  }
}