=====================
Variables
=====================

variable "image_id" {
  type = number
  description = "its number"
  default = 42
  validation {
    condition = true
    error_message = "very bad things were happened"
  }
}

---

(source_file
  (variable_declaration
    (variable_name (name))
    (assigment_expression
      (argument_name)
      (type))
    (assigment_expression
      (argument_name)
      (string_literal))
    (assigment_expression
      (argument_name)
      (number_literal))
    (block
      (name)
      (assigment_expression
        (argument_name)
        (bool_literal))
      (assigment_expression
        (argument_name)
        (string_literal))
    )
  )
)

