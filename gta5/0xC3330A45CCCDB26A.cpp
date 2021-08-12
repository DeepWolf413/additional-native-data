// am_armwrestling.ysc @ L5798
int func_52(var uParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  if (CAM::DOES_CAM_EXIST(*uParam0))
  {
    Var0 = { CAM::GET_CAM_COORD(*uParam0) };
    Var3 = { CAM::GET_CAM_ROT(*uParam0, 2) };
    fVar6 = CAM::GET_CAM_FOV(*uParam0);
    CAM::STOP_CAM_POINTING(*uParam0);
    CAM::SET_CAM_PARAMS(*uParam0, Var0, Var3, (fVar6 - 3f), 0, 1, 1, 2);
    CAM::SET_CAM_PARAMS(*uParam0, Var0, Var3, fVar6, 1500, 0, 0, 2);
    func_53(uParam0, 0.3f);
    return 1;
  }
  return 0;
}