// shoprobberies.ysc @ L11164
void func_239(bool bParam0)
{
  Local_68.f_28.f_3 = 0;
  MISC::SET_BIT(&(Local_68.f_28.f_3), 3);
  MISC::SET_BIT(&(Local_68.f_28.f_3), 4);
  if (!bParam0)
  {
    iLocal_569 = MISC::GET_RANDOM_INT_IN_RANGE(Local_68.f_28.f_4, Local_68.f_28.f_5);
    if (!HUD::DOES_BLIP_EXIST(Local_68.f_28.f_2))
    {
      Local_68.f_28.f_2 = func_242(Local_68.f_28);
      HUD::SET_BLIP_COLOUR(Local_68.f_28.f_2, 2);
    }
    OBJECT::_0xA08FE5E49BDC39DD(Local_68.f_28, -0.2f, true);
  }
  else
  {
    iLocal_569 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_68.f_28.f_4);
    Local_68.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), ENTITY::GET_ENTITY_COORDS(Local_68.f_28, true), Local_68.f_28.f_3, iLocal_569, true, 0);
    if (!HUD::DOES_BLIP_EXIST(Local_68.f_28.f_2))
    {
      Local_68.f_28.f_2 = func_240(Local_68.f_28.f_1);
    }
  }
  Local_68.f_28.f_14 = 1;
}