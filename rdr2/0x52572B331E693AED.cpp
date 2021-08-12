// event_area_centralunion_stg1.ysc @ L15148
void func_388(bool bParam0)
{
  if (bParam0)
  {
    VOLUME::_0x52572B331E693AED(iLocal_2305[2], joaat("CARRIABLE_INVENTORY_ITEM"), joaat("STEAL_ITEM_PROMPT_TABLE"));
  }
  else
  {
    VOLUME::_0x52572B331E693AED(iLocal_2305[2], joaat("CARRIABLE_INVENTORY_ITEM"), joaat("NULL_OVERRIDE_CARRIABLE_PROMPT_TABLE"));
  }
  func_7(16777216, !bParam0);
}