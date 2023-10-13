def calculate_minimum_number_of_cakes(n):
  """
  คำนวณจำนวนเค้กเต็มปอนด์ที่น้อยที่สุดที่เจ้าของร้านต้องเตรียมให้เพียงพอตามรายการที่ลูกค้าสั่ง

  Args:
    n: จำนวนลูกค้า

  Returns:
    จำนวนเค้กเต็มปอนด์ที่น้อยที่สุด
  """

  total_full_cakes = 0
  total_remainder = 0

  for i in range(n):
    a, b, c, d, e = map(int, input().split())

    total_full_cakes += a
    total_remainder += b + 2 * c + 4 * d + 8 * e

  # คำนวณจำนวนเค้กเต็มปอนด์ที่ต้องใช้สำหรับเศษที่เหลือ

  cakes_needed = 0
  while total_remainder > 0:
    if total_remainder >= 8:
      cakes_needed += 1
      total_remainder -= 8
    elif total_remainder >= 4:
      cakes_needed += 1
      total_remainder -= 4
    elif total_remainder >= 2:
      cakes_needed += 1
      total_remainder -= 2
    else:
      cakes_needed += 1
      total_remainder -= 1

  return total_full_cakes + cakes_needed


if __name__ == "__main__":
  n = int(input())
  print(calculate_minimum_number_of_cakes(n))
