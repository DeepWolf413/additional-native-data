// agency_heist3b.ysc @ L122960
int func_888(struct<3> Param0, float fParam3, float fParam4)
{
  if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
  {
    if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, fParam4, fParam4, fParam4, false, false, 0))
    {
      return 0;
    }
    else if (CAM::IS_SCREEN_FADED_OUT())
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}