// am_casino_peds.ysc @ L252525
void func_3083(var uParam0)
{
  if (uParam0->f_258 > 0)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_27))
    {
      PED::DETACH_SYNCHRONIZED_SCENE(uParam0->f_27);
    }
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
    {
      PED::DELETE_PED(&(uParam0->f_2));
    }
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    if (CAM::DOES_CAM_EXIST(uParam0->f_11))
    {
      CAM::DESTROY_CAM(uParam0->f_11, false);
    }
    func_2268(1, 0, 0, 1);
    func_2266(0, 1, 1, 0);
    Global_1683970.f_505 = 0;
    uParam0->f_258 = 0;
  }
}