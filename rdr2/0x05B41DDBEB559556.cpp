// shop_butcher.ysc @ L11119
void func_336(var uParam0, var uParam1, int iParam2)
{
  if (iParam2 == 724483759 || iParam2 == 2090838701)
  {
    Global_1914319.f_19461.f_1 = -1483207246;
    CAM::DETACH_CAM(Local_26.f_7.f_21);
    CAM::STOP_CAM_POINTING(Local_26.f_7.f_21);
    Global_1914319.f_19461.f_22[0 /*12*/].f_11 = 2f;
    func_730(&(Local_26.f_7.f_21), Global_35);
  }
  else if (iParam2 == -887337659)
  {
    Global_1914319.f_19461.f_1 = 0;
    func_731(&(Local_26.f_7));
    func_732(Local_26.f_7.f_21, 1.26f);
  }
}