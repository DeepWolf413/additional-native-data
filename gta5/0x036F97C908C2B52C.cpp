// am_mp_arc_cab_manager.ysc @ L84113
void func_613(var uParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  if (CAM::DOES_CAM_EXIST(uParam0->f_532.f_49))
  {
    func_615(uParam0->f_532.f_43, &Var0, &Var3, &fVar6);
    if (!func_614(uParam0))
    {
      if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_532.f_49))
      {
        CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var3, fVar6, 0, 1, 1, 2);
      }
    }
    else if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_532.f_49))
    {
      if (!func_573(uParam0, 12))
      {
        func_615(uParam0->f_532.f_44, &Var0, &Var3, &fVar6);
        CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var3, fVar6, 0, 1, 1, 2);
        func_615(uParam0->f_532.f_43, &Var0, &Var3, &fVar6);
        CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var3, fVar6, 250, 1, 1, 2);
        func_582(uParam0, 12);
      }
    }
  }
}