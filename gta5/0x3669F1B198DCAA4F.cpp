// am_mp_property_ext.ysc @ L285754
int func_4381(bool bParam0)
{
  struct<50> Var0;
  
  Var0 = 1;
  Var0.f_16 = 1;
  Var0.f_25 = 3;
  Var0.f_35 = 1;
  Var0.f_40 = 1;
  Var0.f_49 = 1;
  if (!func_4400(func_4786(iLocal_249), &Var0))
  {
    return 1;
  }
  if (iLocal_249 == 23)
  {
    GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
  }
  if (iLocal_249 == 40 || iLocal_249 == 41)
  {
    func_4399();
  }
  if (func_4382(bParam0, &Var0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_262))
    {
      OBJECT::DELETE_OBJECT(&iLocal_262);
    }
    return 1;
  }
  return 0;
}