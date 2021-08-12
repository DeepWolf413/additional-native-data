// armenian1.ysc @ L53045
void func_499(int iParam0, float fParam1, float fParam2)
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  struct<3> Var7;
  struct<3> Var10;
  float fVar13;
  
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
    {
      iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
      Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
      Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      Var7 = { Var4 - Var1 };
      fVar13 = SYSTEM::VMAG(Var7);
      if (fVar13 > fParam2)
      {
        fVar13 = fParam2;
      }
      func_491(Var1, Var10, fVar13);
    }
  }
}