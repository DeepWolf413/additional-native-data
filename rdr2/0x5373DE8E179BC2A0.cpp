// bjack_sp.ysc @ L31675
void func_1119(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(*uParam0))
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    if (CAM::IS_CAM_ACTIVE(*uParam0))
    {
      CAM::SET_CAM_ACTIVE(*uParam0, false);
    }
    CAM::DESTROY_CAM(*uParam0, false);
  }
  if (uParam0->f_28)
  {
    MAP::UNLOCK_MINIMAP_ANGLE();
    uParam0->f_28 = 0;
  }
  uParam0->f_1 = { 0f, 0f, 0f };
  uParam0->f_4 = { 0f, 0f, 0f };
  uParam0->f_7 = 0f;
  uParam0->f_25 = 0;
  uParam0->f_26 = 0;
  uParam0->f_27 = 0f;
  uParam0->f_8 = { 0f, 0f, 0f };
  uParam0->f_11 = 0f;
  uParam0->f_12 = 0f;
  uParam0->f_13 = { 0f, 0f, 0f };
  uParam0->f_16 = { 0f, 0f, 0f };
  uParam0->f_19 = { 0f, 0f, 0f };
  uParam0->f_22 = 0f;
  uParam0->f_23 = 0f;
}