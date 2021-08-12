// cellphone_controller.ysc @ L790
void func_11()
{
  iLocal_70 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
  switch (iLocal_70)
  {
    case 0:
      Global_22160 = 4;
      iLocal_71 = 2;
      break;
    
    case 1:
      break;
    
    case 2:
      Global_19798.f_1 = 3;
      func_14();
      break;
  }
}