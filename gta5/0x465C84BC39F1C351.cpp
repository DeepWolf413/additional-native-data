// am_contact_requests.ysc @ L6381
void func_120(float fParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
  HUD::SET_TEXT_FONT(0);
  HUD::SET_TEXT_SCALE(0f, 0.35f);
  HUD::SET_TEXT_LEADING(2);
  HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
  HUD::SET_TEXT_WRAP(fParam0, ((Global_22667 + Global_22669) - 0.0046875f));
  HUD::SET_TEXT_CENTRE(false);
  HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
  HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}