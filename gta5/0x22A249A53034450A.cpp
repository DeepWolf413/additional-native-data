// agency_heist3b.ysc @ L137165
void func_1052(bool bParam0, bool bParam1)
{
  int iVar0;
  
  func_1053(&Global_22451, bParam1);
  GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
  iVar0 = 1;
  if (bParam0)
  {
    if (iVar0 == 1)
    {
      STREAMING::STOP_PLAYER_SWITCH();
      func_1056(0);
      if (ENTITY::DOES_ENTITY_EXIST(Global_1315684))
      {
        if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1315684, false))
        {
          if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1315684))
          {
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1315684, false, false);
          }
          PED::DELETE_PED(&Global_1315684);
        }
      }
    }
  }
}