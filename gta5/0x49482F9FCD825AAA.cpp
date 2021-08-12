// fm_capture_creator.ysc @ L74720
void func_876(var uParam0, int iParam1, int iParam2, var uParam3)
{
  struct<3> Var0;
  
  Var0 = { Global_4718592.f_61833[iParam1 /*150*/] };
  if (func_3585(Var0))
  {
    Var0 = { uParam3->f_3 };
  }
  *uParam0 = OBJECT::CREATE_OBJECT(iParam2, Var0, false, false, false);
  ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
  ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
  CAM::DISABLE_CAM_COLLISION_FOR_OBJECT(*uParam0);
}