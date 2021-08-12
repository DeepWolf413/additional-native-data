// fm_bj_race_controler.ysc @ L539957
void func_9156(var uParam0, var uParam1)
{
  int iVar0;
  
  if (func_4490(uParam1) == 3)
  {
    if (func_301(uParam0, 0) || func_250(uParam0))
    {
      if (func_377())
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
        {
          iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
          if (((VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
          {
            return;
          }
        }
      }
      CAM::_USE_STUNT_CAMERA_THIS_FRAME();
      if (func_9157((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_135, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_2))
      {
        CAM::_SET_GAMEPLAY_CAM_HASH("FOLLOW_VEHICLE_STUNT_CAMERA");
      }
    }
  }
}