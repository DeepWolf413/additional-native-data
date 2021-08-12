// barcustomer_interaction.ysc @ L325
void func_7()
{
  func_15();
  if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
  {
    TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0.15f);
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_29))
  {
    TASK::_DELETE_SCENARIO_POINT(iLocal_29);
  }
}