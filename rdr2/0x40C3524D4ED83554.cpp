// ambush_odr_road_prec.ysc @ L12818
void func_473()
{
  Local_274.f_136 = PED::CREATE_GROUP(0);
  func_582();
  TASK::CLEAR_PED_TASKS(Local_15[1], true, false);
  PED::_0x97C475212B327666(Local_274.f_136, 1);
  PED::_0x40C3524D4ED83554(Local_274.f_136, 1);
  func_583(&(Local_15[0]), &(Local_274.f_136), 1, 1, 1, 1, 0);
  func_583(&(Local_15[1]), &(Local_274.f_136), 0, 1, 1, 1, 0);
}