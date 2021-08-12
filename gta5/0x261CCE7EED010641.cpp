// act_cinema.ysc @ L1353
void func_11()
{
  if (MISC::IS_BIT_SET(iLocal_225, 11))
  {
    if (CAM::DOES_CAM_EXIST(iLocal_212))
    {
      CAM::DESTROY_CAM(iLocal_212, false);
    }
    if (MISC::IS_BIT_SET(iLocal_225, 6))
    {
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    }
    INTERIOR::UNPIN_INTERIOR(iLocal_213);
    func_1147(1);
    func_15();
    func_12();
    MISC::CLEAR_BIT(&iLocal_225, 10);
    MISC::CLEAR_BIT(&iLocal_225, 2);
    MISC::CLEAR_BIT(&iLocal_225, 6);
    MISC::CLEAR_BIT(&iLocal_225, 11);
  }
}