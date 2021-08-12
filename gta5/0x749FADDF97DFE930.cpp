// carsteal3.ysc @ L88883
void func_351(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (iParam5 == 1)
    {
      PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
    }
    else if (iParam5 == 0)
    {
      ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
    }
    ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
    if (iParam0 == PLAYER::PLAYER_PED_ID())
    {
      if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
      {
        PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
      }
      if (iParam6 == 1)
      {
        CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
        CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
      }
      if (iParam7 == 1)
      {
        STREAMING::LOAD_SCENE(Param1);
      }
    }
  }
}