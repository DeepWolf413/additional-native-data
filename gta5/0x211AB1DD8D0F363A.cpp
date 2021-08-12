// fm_mission_controller.ysc @ L765048
void func_13069(int iParam0, var uParam1)
{
  DECORATOR::DECOR_SET_INT(iParam0, func_13070(0), *uParam1);
  DECORATOR::DECOR_SET_INT(iParam0, func_13070(1), uParam1->f_1);
  DECORATOR::DECOR_SET_INT(iParam0, func_13070(2), uParam1->f_2);
  DECORATOR::DECOR_SET_FLOAT(iParam0, func_13070(3), uParam1->f_3);
  DECORATOR::DECOR_SET_FLOAT(iParam0, func_13070(4), uParam1->f_4);
  DECORATOR::DECOR_SET_INT(iParam0, func_13070(5), uParam1->f_5);
  DECORATOR::DECOR_SET_INT(iParam0, func_13070(6), uParam1->f_6);
}