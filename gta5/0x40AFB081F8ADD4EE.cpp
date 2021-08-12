// cellphone_controller.ysc @ L584
void func_1()
{
  iLocal_70 = GRAPHICS::_RETURN_TWO(Global_22164);
  switch (iLocal_70)
  {
    case 0:
      Global_22160 = 4;
      break;
    
    case 1:
      break;
    
    case 2:
      MISC::SET_BIT(&Global_7669, 15);
      func_14();
      break;
  }
}